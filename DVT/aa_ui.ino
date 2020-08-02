/********************************************************************************
 *                                                                              *
 *                                      ui.ino                                  *
 *                                                                              *
 *******************************************************************************/

//This file handles all User interactions through LEDs and buttons

/*
Tasks
Create a function to get button presses
Create led ids and led state definitions

Complete
Create a function to set led state
 
*/


void ui_set_led (char led_id, bool led_state) {
    digitalWrite(led_id, led_state);
}
