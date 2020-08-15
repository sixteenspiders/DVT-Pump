//This file contains functions to handle pressure sensor

/********************************************************************************
 *                                                                              *
 *                                    Defines                                   *
 *                                                                              *
 *******************************************************************************/

#define avg_readings 50

/********************************************************************************
 *                                                                              *
 *                                   Functions                                  *
 *                                                                              *
 *******************************************************************************/

// read single pressure value
int prr_read_pressure (char sensor_id) {
    //read pressure for that sensor and return
    return analogRead(sensor_id);
}

// read many pressure values and return average
int prr_avg_pressure (char sensor_id) {
    for (int i = 0; i < avg_readings; i++) {
        sum = prr_read_pressure(sensor_id);
    }

    return sum/avg_readings;
}

// convert raw adc value to pressure mmHg
int prr_convert_pressure (int adc_val) {
    //convert pressure here
    return 1;
}
