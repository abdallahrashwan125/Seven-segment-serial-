char Reading;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    Reading=Serial.read();
  
  digitalWrite(4,0);
digitalWrite(3,0);
digitalWrite(5,0);
digitalWrite(6,0);
digitalWrite(7,0);
digitalWrite(8,0);
digitalWrite(9,0);
digitalWrite(2,0);
  }
switch(Reading){
    case '0':
digitalWrite(4,1);
digitalWrite(3,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
  case '1':
digitalWrite(4,1);
digitalWrite(8,1);
    break;
      case '2':
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(2,1);
digitalWrite(9,1);
  break;
      case '3':
digitalWrite(4,1);
digitalWrite(2,1);
digitalWrite(5,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
      case '4':
digitalWrite(2,1);
digitalWrite(3,1);
digitalWrite(4,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
      case '5':
digitalWrite(5,1);
digitalWrite(3,1);
digitalWrite(2,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
      case '6':
digitalWrite(5,1);
digitalWrite(3,1);
digitalWrite(2,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
      case '7':
digitalWrite(4,1);
digitalWrite(5,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
      case '8':
digitalWrite(4,1);
digitalWrite(3,1);
digitalWrite(5,1);
digitalWrite(6,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
digitalWrite(2,1);
  break;
      case '9':
digitalWrite(4,1);
digitalWrite(3,1);
digitalWrite(5,1);
digitalWrite(2,1);
digitalWrite(7,1);
digitalWrite(8,1);
digitalWrite(9,1);
  break;
    
}
}