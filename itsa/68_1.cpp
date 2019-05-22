#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>
#include<iostream>
#include<bitset>
using namespace std;
int main() {
 int ASKII[256] = {0};
 string sentence;

 getline(cin, sentence);//put in the data 

 int countlen = sentence.size(); //count total lenth

 int buffer;
 for (int i = 0; i < countlen; i++) {
  buffer = sentence[i] - ' ';// standard is space
  
  ASKII[buffer] += 1;
 }
 cout << ASKII[0] + 1 << endl;
 for (int i = 1; i < 256; i++)
 {
  char buf1 = ' ' + i;// take out c
  int buf2 = ASKII[i];// of character
  if (buf2 > 0 && i > 0) {
   cout << buf1 << ":" << buf2 << endl;
  } 
 }
 system("pause");
 return 0;
}
