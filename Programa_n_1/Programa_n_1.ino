
//Declaramos los pines de salida,
//en el el proyecto asi lo tenemos cableado
int a = 12;
int b = 11;
int c = 10;
int d = 9;
int e = 8;
int f = 7;
int g = 6;
unsigned long A = 500;
const int buttonPin = 2;     // donar nom al pin 2 de l’Arduino

;//Hacemos que todas nuestras variables sean salidas
void setup()
{
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}

void loop()
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(e,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(e,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(f,LOW);

delay(A);

digitalWrite(b,HIGH);
digitalWrite(c,HIGH);

delay(A);

digitalWrite(b,LOW);
digitalWrite(c,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(g,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);

delay(A);

digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);

delay(A);

digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(c,LOW);
digitalWrite(b,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(f,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
digitalWrite(c,HIGH);
digitalWrite(g,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
digitalWrite(c,LOW);
digitalWrite(g,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);


delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);


delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);

delay(A);

digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);

delay(A);

digitalWrite(a,LOW);
digitalWrite(b,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);

delay(A);

 }
//********** Funcions *************************************************************
