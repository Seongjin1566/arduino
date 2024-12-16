int btn1 = 7;
int btn2 = 8;
int sum = 10;
int p=0;
int q=0;
int k=0;

int r=2;
int b=4;
int y=12;

int R=3;
int B=10;
int G=11;

void setup(){
  pinMode(btn1,INPUT);
  pinMode(btn2,INPUT);
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(y,OUTPUT);
}

void loop(){
  delay(115);
  int v1=digitalRead(btn1);
  int v2=digitalRead(btn2);
  
  if(v1==HIGH && v2==LOW){
    if(sum==0){
      sum=sum;
    }else{
      sum = sum-10;
    }
  } else if(v2==LOW && v1==LOW){
    sum = sum;
  } else if(v1==LOW &&v2 == HIGH){
    if(sum==20){
    sum = sum;
    }else {
      sum=sum+10;
    }
  }

  if(sum==20){
    digitalWrite(r,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(y,LOW);

    analogWrite(R,0);
    analogWrite(G,255);
    analogWrite(B,255);

  }else if(sum==10){
    digitalWrite(r,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(y,LOW);
    
    analogWrite(R,255);
    analogWrite(G,255);
    analogWrite(B,0);

  }else if(sum==0){
    digitalWrite(r,LOW);
    digitalWrite(b,LOW);
    digitalWrite(y,HIGH);

    analogWrite(R,220);
    analogWrite(G,0);
    analogWrite(B,180);
  }
}
  


