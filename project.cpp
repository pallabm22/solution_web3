#include<bits/stdc++.h>
using namespace std;
class car{
    private:
    string make;
    string model;
    int year;
    int speed;
    int x;
    int y;
    int z;
    
    public:
    car(string make,string model,int year,int speed,int x,int y,int z){
        this->make=make;
        this->model=model;
        this->year=year;
        this->speed=speed;
        this->x=x;
        this->y=y;
        this->z=z;
        
    }
    string getMake(){
        return make;
    }
    string getModel(){
        return model;
    }
    int getYear(){
        return year;
    }
    int getSpeed(){
        return speed;
    }
    int getX(){
        return x;
    }
     int getY(){
        return y;
    }
     int getZ(){
        return z;
    }
    



    void setMake(string make){
        this->make=make;
    }
    void setModel(string model){
        this->model=model;
    }
    void setYear(int year){
        this->year=year;
    }
    void setSpeed(int speed){
        this->speed=speed;
    }
    void setX(int x){
        this->x=x;
    }
    void setY(int y){
        this->y=y;
    }
    void setZ(int z){
        this->z=z;
    }
   




    void accelerate(int increment_speed){
        speed+=increment_speed;
    }
    void brake(int decrement_speed){
        speed-=decrement_speed;
        if(speed<0){
            speed=0;
        }
    }
    void move(){
        x+=speed;
        y+=speed;
        z+=speed;
    }
    bool detect_collision(car car2){
        double distance=sqrt((pow(x-car2.getX(),2))+(pow(y-car2.getY(),2))+(pow(z-car2.getZ(),2)));
        if(distance<5){
            return true;
        }
        else{
            return false;
        }
    }
    double time_to_collision(car car2){
        double rel_speed=speed-car2.getSpeed();
        if(rel_speed<=0){
            return INFINITY;
        }
        else{
            double distance=sqrt((pow(x-car2.getX(),2))+(pow(y-car2.getY(),2))+(pow(z-car2.getZ(),2)));
            double time=distance/rel_speed;
            return time;
        }
    }
};
