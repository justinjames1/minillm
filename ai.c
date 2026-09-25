
#include <stdio.h>
int main()
{

double training_buffer[4] = {5.0f,2.0f,3.0f,5.0f};

double bias_buffer[4] = {0.0f,0.0f,0.0f,0.0f};
double weight_buffer[4] = {10.0f,10.0f,10.0f,10.0f};
double input[4] = {22.0f,54.0f,42.0f,5.0f};
double a = 0;
double loss;
double s1;
double s2;
double s3;
double s4;
const double learning_rate = 0.00001;

for(;;){
a = 0;
double w1,w2,w3,w4; w1 = weight_buffer[0]; w2 = weight_buffer[1]; w3 = weight_buffer[2]; w4 = weight_buffer[3]; 
double b1,b2,b3,b4; b1 = bias_buffer[0]; b2 = bias_buffer[1]; b3 = bias_buffer[2]; b4 = bias_buffer[3]; 
double z1,z2,z3,z4;

z1 = input[0]; z1 = z1*w1+b1; if(z1>0.0f){z1=z1;}else{z1=0.0f;}
z2 = input[1]; z2 = z2*w2+b2; if(z2>0.0f){z2=z2;}else{z2=0.0f;}
z3 = input[2]; z3 = z3*w3+b3; if(z3>0.0f){z3=z3;}else{z3=0.0f;}
z4 = input[3]; z4 = z4*w4+b4; if(z4>0.0f){z4=z4;}else{z4=0.0f;}
double output[4] = {z1,z2,z3,z4};
double loss1 = training_buffer[0] - output[0]; if(loss1<0.0f){weight_buffer[0]-=learning_rate;} if(loss1>0.0f){weight_buffer[0]+=learning_rate;} 
double loss2 = training_buffer[1] - output[1]; if(loss2<0.0f){weight_buffer[1]-=learning_rate;} if(loss2>0.0f){weight_buffer[1]+=learning_rate;}
double loss3 = training_buffer[2] - output[2]; if(loss3<0.0f){weight_buffer[2]-=learning_rate;} if(loss3>0.0f){weight_buffer[2]+=learning_rate;} 
double loss4 = training_buffer[3] - output[3]; if(loss4<0.0f){weight_buffer[3]-=learning_rate;} if(loss4>0.0f){weight_buffer[3]+=learning_rate;} 
  
double bi1 = training_buffer[0] - output[0]; if(bi1<0.0f){bias_buffer[0]-=learning_rate;} if(bi1>0.0f){bias_buffer[0]+=learning_rate;} 
double bi2 = training_buffer[1] - output[1]; if(bi2<0.0f){bias_buffer[1]-=learning_rate;} if(bi2>0.0f){bias_buffer[1]+=learning_rate;}
double bi3 = training_buffer[2] - output[2]; if(bi3<0.0f){bias_buffer[2]-=learning_rate;} if(bi3>0.0f){bias_buffer[2]+=learning_rate;} 
double bi4 = training_buffer[3] - output[3]; if(bi4<0.0f){bias_buffer[3]-=learning_rate;} if(bi4>0.0f){bias_buffer[3]+=learning_rate;} 

if(loss1==0.0){a+=1.0f; s1 = output[0];} if(loss2==0){a+=1.0f;s2 = output[1];} if(loss3==0){a+=1.0f;s3 = output[2];} if(loss4==0){a+=1.0f;s4 = output[3];}
if (a==4){printf("final answer.\n");printf("%.3f",s1);printf("%.3f",s2);printf("%.3f",s3);printf("%.3f",s4);break;}
printf("%.3f",z1);printf("%.3f",z2);printf("%.3f",z3);printf("%.3f\n",z4);
}
}
