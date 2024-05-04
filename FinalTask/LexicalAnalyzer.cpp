#include <iostream>
#include <cstring>

using namespace std;

string texts;


struct Keys {
    string a[100] = {
        "#include", "using", "namespace", "int", "main", "if", "else", "return",
        "int", "double", "char", "bool", "string", "float", "long long",
        "long long int", "short", "long", "main", "int32_t", "using",
        "namespace", "default", "const", "delete", "continue", "class", "asm",
        "operator", "private", "public", "protected", "new", "enum", "struct",
        "inline", "typedef", "union", "for", "while", "do", "switch", "auto",
        "break", "friend", "if", "else if", "else", "static", "void", "volatile",
        "goto", "register", "return", "sizeof", "virtual", "template", "vector",
        "map", "set", "ordered_set", "binary_search", "bitset", "upper_bound",
        "lower_bound", "try", "catch", "throw", "deque", "max", "min",
        "max_element", "min_element","std"
    };
} key;


bool isValidDataType(string v) {

        bool ok =true;

        int rSpace = 32;    /// SPACE
        int rSlash = 47;    /// Slash
        int rColon = 58;    /// colon
        int rAtSign = 64;   /// at sign
        int xS = 91;
        int yS = 94;
        int h = 96;
        int sf = 123;
        int ss = 126;

        int n = v.size();

        for(int i=0;i<100;++i) {
         if(key.a[i] != v) {
            ok = false;
            cout <<"\nInvalid! Errors in Code!\n";
            break;
            //cout <<"datatype didnot matched-> " << i << '\n';
        } else {

        }
        }
    return ok;
}


const char* keywords[] = {
    "#include", "using", "namespace", "int", "main", "if", "else", "return",
        "int", "double", "char", "bool", "string", "float", "long long",
        "long long int", "short", "long", "main", "int32_t", "using",
        "namespace", "default", "const", "delete", "continue", "class", "asm",
        "operator", "private", "public", "protected", "new", "enum", "struct",
        "inline", "typedef", "union", "for", "while", "do", "switch", "auto",
        "break", "friend", "if", "else if", "else", "static", "void", "volatile",
        "goto", "register", "return", "sizeof", "virtual", "template", "vector",
        "map", "set", "ordered_set", "binary_search", "bitset", "upper_bound",
        "lower_bound", "try", "catch", "throw", "deque", "max", "min",
        "max_element", "min_element"

};
const int numKeywords = sizeof(keywords) / sizeof(keywords[0]);

bool isAlnumOrUnderscore(char c) {
  return isalnum(c) || c == '_' || c == ';' || c == '<' || c=='>';
}

///numeric
bool isNumeric(const char* s) {
  while (*s) {
    if (!isdigit(*s)) {
      return false;
    }
    ++s;
  }
  return true;
}

/// keyword
bool isKeyword(const char* s) {
  for (int i = 0; i < numKeywords; ++i) {
    if (strcmp(s, keywords[i]) == 0) {
      return true;
    }
  }
  return false;
}

/// deterrmining typetoken

char* getTokenType(const char* token) {
  if (isKeyword(token)) {
    return (char*)"keyword";
  } else if (isNumeric(token)) {
    return (char*)"number";
  } else if (strlen(token) == 1 && ispunct(*token)) {
    ///ops
    return (char*)"operator";
  } else {
    return (char*)"identifier";
  }
}

/// lexical analysis
void tokenize(const char* code) {
  int i = 0;
  char curTkns[1000];
  int ctindex = 0;

  while (code[i] != '\0') {
    char c = code[i];

    if (isspace(c)) {
      ++i;
      continue;
    } else if (c == '/' && code[i + 1] == '/') {
      /// single-line comments
      while (code[i] != '\n' && code[i] != '\0') {
        ++i;
      }
    } else if (c == '/' && code[i + 1] == '*') {
      /// multi-line comments
      i += 2;
      while (code[i] != '\0' && !(code[i] == '*' && code[i + 1] == '/')) {
        ++i;
      }
      i += 2;
    } else {
      curTkns[ctindex++] = c;
      ++i;

      if (code[i] != '\0' && !isAlnumOrUnderscore(code[i]) && !ispunct(code[i])) {
        curTkns[ctindex] = '\0';
        cout << "<" << getTokenType(curTkns) << ", " << curTkns << ">" << '\n';
        ctindex = 0;
      }
    }
  }
  if (ctindex > 0) {
    curTkns[ctindex] = '\0';
    cout << "<" << getTokenType(curTkns) << ", " << curTkns << ">" << '\n';
  }
}

int main() {

freopen("input.txt","r",stdin);

  const char* code = R"(
#include <iostream>
using namespace std;

int main() {
	cout << "Welcome";
	int x = 24 % 10;
	if (x == 4) {
	  x = 40;
	}
	itn y = 50;
	int #z = 60;

	return 0;
}

)";

  cout << "Lexical Analysis:\n";
  tokenize(code);
  string s;
getline(cin,s);


cout << isValidDataType(s);

  return 0;
}
