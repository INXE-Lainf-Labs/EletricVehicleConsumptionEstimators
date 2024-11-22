#include <EloquentTinyML.h>
//#include "Primeiro_int8.h"
#include "Primeiro_float32.h"


#define NUMBER_OF_INPUTS 3
#define NUMBER_OF_OUTPUTS 1

// in future projects you may need to tweek this value: it's a trial and error process
#define TENSOR_ARENA_SIZE 6*1024 // Here you set your model len 5488/1024 = 5.35 = 6

double start_time = -1;
double end_time = -1;
double width_time = -1;

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> tf;


void setup() {
  Serial.begin(115200);
  // if (!tf.begin(Primeiro_int8)) {
  if (!tf.begin(Primeiro_float32)) {
    Serial.println("Cannot inialize model");
    delay(5000);
  }
}

void loop() {          
  // float input[3] = {0.51428571, 0.55555556, 0.41841004};
  float input[16] = {42.242235, -83.767309, 33.000000, 32.799999, 1348.000000, 45.490196, -3.906250, -3.125000, 279.584839, 279.584839, 0.000000, 42.242183, -83.767381, 1.000000, 0.000000, 0.000000};

  start_time = micros();
  float predicted  = tf.predict(input);
  end_time = micros();

  width_time = end_time - start_time;

  Serial.print("Predict: ");
  Serial.println(predicted);
  Serial.print("Real: ");
  // Serial.println(15.4);
  Serial.println("0.0066919514033435");
  Serial.print("Processing time: ");
  Serial.println(width_time);
  Serial.println(" ");
  delay(1000);
}
