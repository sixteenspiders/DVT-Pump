//This file contains functions to handle pressure sensor

/*
TODO
add function to take single measurement
add function to take 50 or so measurements and return average
add function to convert adc to prr
 */


int prr_read_pressure (char sensor_id) {
    //read pressure for that sensor
    return analogRead(sensor_id);
}
