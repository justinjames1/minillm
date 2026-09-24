#include <stdio.h>
int main()
{

int training_buffer[5] = {0,0,0,0};


int bias_buffer[5] = {0,0,0,0};
int weight_buffer[5] = {10,10,10,10};
int input[5] = {22,54,42,55};
int loss;
for(int i; loss!=0;){
int w1,w2,w3,w4; w1 = weight_buffer[0]; w2 = weight_buffer[1]; w3 = weight_buffer[2]; w4 = weight_buffer[3]; 
int b1,b2,b3,b4; b1 = bias_buffer[0]; b2 = bias_buffer[1]; b3 = bias_buffer[2]; b4 = bias_buffer[3]; 
int z1,z2,z3,z4;

z1 = input[1]; z1 = z1*w1+b1; if(z1>0){z1=z1;}else{z1=0;}
z2 = input[2]; z2 = z2*w2+b2; if(z2>0){z2=z2;}else{z2=0;}
z3 = input[3]; z3 = z3*w3+b3; if(z3>0){z3=z3;}else{z3=0;}
z4 = input[4]; z4 = z4*w4+b4; if(z4>0){z4=z4;}else{z4=0;}

int output[4] = {z1,z2,z3,z4};

int loss1 = training_buffer[0] - output[0]; if(loss1>0){weight_buffer[0]-=1;} if(loss1<0){weight_buffer[0]+=1;} 
int loss2 = training_buffer[1] - output[1]; if(loss2>0){weight_buffer[1]-=1;} if(loss2<0){weight_buffer[1]+=1;}
int loss3 = training_buffer[2] - output[2]; if(loss3>0){weight_buffer[2]-=1;} if(loss3<0){weight_buffer[2]+=1;} 
int loss4 = training_buffer[3] - output[3]; if(loss4>0){weight_buffer[3]-=1;} if(loss4<0){weight_buffer[3]+=1;} 
loss = loss1+loss2+loss3+loss4;
}
}
