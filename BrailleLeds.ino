const int A[] = {1,0, // 1
                0,0,
                0,0};

const int B[] = {1,0,
                1,0,
                0,0};

const int C[] = {1,1,
                0,0,
                0,0};

const int D[] = {1,1,
                0,1,
                0,0};

const int E[] = {1,0,
                0,1,
                0,0};

const int F[] = {1,1,
                1,0,
                0,0};
                
const int G[] = {1,1,
                1,1,
                0,0};
                
const int H[] = {1,0,
                1,1,
                0,0};
                
const int I[] = {0,1,
                1,0,
                0,0};
                
const int J[] = {0,1,  //0
                1,1,
                0,0};
                
const int K[] = {1,0,
                0,0,
                1,0};
                
const int L[] = {1,0,
                1,0,
                1,0};
                
const int M[] = {1,1,
                0,0,
                1,0};
                
const int N[] = {1,1,
                0,1,
                1,0};
                
const int O[] = {1,0,
                0,1,
                1,0};

const int P[] = {1,1,
                1,0,
                1,0};

const int Q[] = {1,1,
                1,1,
                1,0};

const int R[] = {1,0,
                1,1,
                1,0};

const int S[] = {0,1,
                1,0,
                1,0};

const int T[] = {0,1,
                1,1,
                1,0};

const int U[] = {1,0,
                0,0,
                1,1};

const int V[] = {1,0,
                1,0,
                1,1};

const int W[] = {0,1,
                1,1,
                0,1};

const int X[] = {1,1,
                0,0,
                1,1};

const int Y[] = {1,1,
                0,1,
                1,1};

const int Z[] = {1,0,
                0,1,
                1,1};

const int NUMBER[] = {1,0,
                      1,0,
                      1,1};

//Leds
const int LED13 = 13;
const int LED12 = 12;
const int LED11 = 11;
const int LED10 = 10;
const int LED09 = 9;
const int LED08 = 8;

//button
const int CANT = 6;

int i = 0;
int val = 0;

void setup() {
  pinMode(LED13, OUTPUT);
  pinMode(LED12, OUTPUT);
  pinMode(LED11, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED09, OUTPUT);
  pinMode(LED08, OUTPUT);
}

void off (){
    digitalWrite(LED08, LOW);
    digitalWrite(LED09, LOW);
    digitalWrite(LED10, LOW);
    digitalWrite(LED11, LOW);
    digitalWrite(LED12, LOW);
    digitalWrite(LED13, LOW);
    delay(100);
}


void enableLeds(const int ledsArray[]){
    for (int i = 0; i < CANT; i++){
      if (ledsArray[i] == 1){
            switch (i+1){
              case 1:
                digitalWrite(LED08, HIGH);
              break;
              case 3:
                digitalWrite(LED09, HIGH);
              break;
              case 5:
                digitalWrite(LED10, HIGH);
              break;
              case 2:
                digitalWrite(LED11, HIGH);
              break;
              case 4:
                digitalWrite(LED12, HIGH);
              break;
              case 6:
                digitalWrite(LED13, HIGH);
              break;
          }  
      }
      
    }
}

void printString(char* string, boolean isNumber){
    if (isNumber){
      enableLeds(NUMBER);
      delay(2000);
      off();
    }
    for (i=0; i<strlen(string); i++){
        printCharacter(string[i]);
        delay(2000);
        off();
    }
}


void printCharacter(char letter){
   switch(letter){
      case 'A': enableLeds(A); break;
      case 'B': enableLeds(B); break;
      case 'C': enableLeds(C); break;
      case 'D': enableLeds(D); break;
      case 'E': enableLeds(E); break;
      case 'F': enableLeds(F); break;
      case 'G': enableLeds(G); break;
      case 'H': enableLeds(H); break;
      case 'I': enableLeds(I); break;
      case 'J': enableLeds(J); break;
      case 'K': enableLeds(K); break;
      case 'L': enableLeds(L); break;
      case 'M': enableLeds(M); break;
      case 'N': enableLeds(N); break;
      case 'O': enableLeds(O); break;
      case 'P': enableLeds(P); break;
      case 'Q': enableLeds(Q); break;
      case 'R': enableLeds(R); break;
      case 'S': enableLeds(S); break;
      case 'T': enableLeds(T); break;
      case 'U': enableLeds(U); break;
      case 'V': enableLeds(V); break;
      case 'W': enableLeds(W); break;
      case 'X': enableLeds(X); break;
      case 'Y': enableLeds(Y); break;
      case 'Z': enableLeds(Z); break;
      case '0': enableLeds(J); break;
      case '1': enableLeds(A); break;
      case '2': enableLeds(B); break;
      case '3': enableLeds(C); break;
      case '4': enableLeds(D); break;
      case '5': enableLeds(E); break;
      case '6': enableLeds(F); break;
      case '7': enableLeds(G); break;
      case '8': enableLeds(H); break;
      case '9': enableLeds(I); break;
      default: off(); break;
  }
}


void loop() {

 printString("BRAILLE LEDS TEST", false);
   
 delay(5000);
}

