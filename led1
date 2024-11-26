// int led = 12; //변수의 자료형을 알려준 뒤 변수 저장 세미콜론을 달아줘야함
// void setup() {       //void는 함수 , 중괄호로 인덴트 대신 /  setup은 기본 설정
// pinMode(led, OUTPUT); //pinMOde를 기본 설정, led라는 핀을 출력으로
// }
// void loop() {  //loop는 반복문
// digitalWrite(led, HIGH); //digitalwrite는 디지털 신호를 출력해라 , high는 켜짐
// delay(500); // 1/1000 단위이기에 1000은 
// digitalWrite(led, LOW);
// delay(500);
// }


int led = 12;
int btn = 7;
// 버튼을 연결한 핀의 번호를 적으면 된다.
void setup(){
pinMode(led, OUTPUT);
pinMode(btn, INPUT);
}
02
피지컬 컴퓨팅
void loop(){
int value = digitalRead(btn);
if(value == HIGH){
digitalWrite(led, HIGH);
} else {
digitalWrite(led, LOW); 
}
