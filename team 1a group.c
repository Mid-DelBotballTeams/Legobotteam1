#include <kipr/botball.h>

int main()
{
    printf("hello world/n");                      
    enable_servos();
    set_servo_position(0,362);
    msleep(300);

    //       cmpc(0);
    //while(gmpc(0) < 1700)      //15cm-16cm, 16cm-13cm
    //{
    // mav(0,1500);
    //mav(2,0);
    //}
    cmpc(0);
    while(gmpc(0) < 7400)
    {
        mav(0,1440);
        mav(2,1500);
    }
    mav(0,600);
    mav(2,0);
    set_servo_position(0,362);
    msleep(500);
    
    mav(0,600);
    mav(2,0);
    set_servo_position(0,462);
    msleep(500);
    
    mav(0,600);
    mav(2,0);
    set_servo_position(0,562);
    msleep(500);
    
    mav(0,600);
    mav(2,600);
    msleep(400);
    set_servo_position(0,662);
    msleep(400);

    set_servo_position(0,772);
    msleep(600);
    ao();
    msleep(500);
    cmpc(0);
    while(gmpc(0) > -175)
    {
        mav(0,-700);
        mav(2,-700);
    }
    set_servo_position(0,662);
    cmpc(0);
    while(gmpc(0) > -550)
    {
        mav(0,-800);
        mav(2,-800);
    }
    
     set_servo_position(0,662);
    cmpc(0);
    while(gmpc(0) > -550)
    {
        mav(0,-800);
        mav(2,-800);
    }
     
     set_servo_position(0,362);
    cmpc(0);
    while(gmpc(0) > -550)
    {
        mav(0,-800);
        mav(2,0);
    }
    
     
    
    return 0;
}
    
