#include <kipr/botball.h>

int main()
{
    printf("hello world/n");
    enable_servos();
    set_servo_position(0,262);
    msleep(300);
    //  cmpc(0);
      // while(gmpc(0) < 100)
       //{
         // mav(0,1500);
          //mav(2,1500);
       //}
      //       cmpc(0);
       //while(gmpc(0) < 1700)      //26cm away from pvc right wheel 22cm from center
       //{
         // mav(0,1500);
          //mav(2,0);
       //}
       cmpc(0);
       while(gmpc(0) < 7500)
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
    
    
    return 0;
}
