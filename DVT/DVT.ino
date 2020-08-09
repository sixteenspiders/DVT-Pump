/********************************************************************************
 *                                                                              *
 *                                    Defines                                   *
 *                                                                              *
 *******************************************************************************/

// Pin definitions
#define pin_led_enable
#define pin_led_mode
#define pin_led_mute
#define pin_led_alarm_leak
#define pin_led_alarm_high_prr

#define pin_buzzer

#define pin_button_enble
#define pin_button_mute
#define pin_button_pressure
#define pin_button_reset


/********************************************************************************
 *                                                                              *
 *                                   Functions                                  *
 *                                                                              *
 *******************************************************************************/

//function which checks how many sleeves are connected at the startup
void check_sleeve_count (void)
{
    //start pumping sleeve 1 and start counter
    //wait till pressure is reached defined somewhere up or 10 sec max
    //stop the timer
    //if time < 500 ms, no sleeve is attached
    //if time around 5-6 seconds sleeve is attached
    //if time exceeds 10 seconds, leak in the sleeve

    //do the same for sleeve 2
}

void setup() {

}

void loop() {

}
