#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

/************************************************************************/
/* La siguiente estructura simula un objeto en C                        */
/*                                                                      */
/* En este caso representa un sensor de temperatura                     */
/* Las propiedades estan implementadas comp punteros a variables del .c */
/* Los metodos son punteros a funciones definidas dentro del .c         */
/************************************************************************/
typedef struct
{
    // Sensor props
    unsigned char* temp_string;
    float *temp;
    // Sensor Functions
    void (*initialize)(void);
    void (*sample_temp)(void);
    void (*go_sleep)(uint8_t seconds);
} tempSensor_t;


/************************************************************************/
/* La declaración de esta variable se realiza dentro del .c             */
/*                                                                      */
/* Agregar este "extern" en el archivo de cabecera, permite que         */
/* cualquier .c que lo incluya con #include, tenga acceso al "objeto".  */
/************************************************************************/
extern const tempSensor_t tempSensor;

#endif /* TEMP_SENSOR_H_ */