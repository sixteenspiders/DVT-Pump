//This file contains functions to handle pressure sensor

/*
TODO
--add function to take single measurement
add function to take 50 or so measurements and return average
add function to convert adc to prr
 */

#define avg_readings 50

int prr_read_pressure (char sensor_id) {
    //read pressure for that sensor and return
    return analogRead(sensor_id);
}

int prr_avg_pressure (char sensor_id) {
    for (int i = 0; i < avg_readings; i++) {
        sum = prr_read_pressure(sensor_id);
    }

    return sum/avg_readings;
}


int prr_convert_pressure (int adc_val) {
    return 1;
}
