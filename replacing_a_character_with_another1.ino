// C++ code
//
String myString="Hello World";
char charToReplace='o';
char replacementChar='a';
void setup()
{
  Serial.begin(9600);
  Serial.println("Original String:"+myString);
  replaceCharacter(myString,charToReplace, replacementChar);
  Serial.println("Modified String:"+myString);
}

void loop()
{
  
}
void replaceCharacter(String &str,char toReplace,char replacement){
  for(int i=0;i<str.length();i++){
    if(str[i]==toReplace){
      str[i]=replacement;
    }
  }
}