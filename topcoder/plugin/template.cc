$BEGINCUT$
$PROBLEMDESC$
$ENDCUT$
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
using namespace std;

vector<string> split( const string &s, const string &delim = " " ) {vector<string> res; string t;for (int i = 0 ; i != s.size() ; i++ ) {if (delim.find( s[i] ) != string::npos ) {if (!t.empty()) {res.push_back( t );t = "";}} else {t += s[i];}}if (!t.empty()) res.push_back(t);return res;}
vector<int> splitInt( const string &s, const string &delim = " " ) {vector<string> tok = split(s, delim); vector<int> res;for (int i = 0 ; i != tok.size(); i++ ) res.push_back(atoi(tok[i].c_str()));return res;}

$BEGINCUT$
#define ARRSIZE(x) (sizeof(x)/sizeof(x[0]))
template<typename T> void print(T a) {cerr << a;}
void print(long long a ) {cerr << a << "L";}
void print(string a ) {cerr << '"' << a << '"';}
template<typename T> void print(vector<T>);
template<typename T> void eq(int, T, T);
void eq(int, long long, long long);
template<typename T> void eq(int, vector<T>, vector<T>);
void eq(int, string, string);
$ENDCUT$
class $CLASSNAME$ {
public:
  $RC$ $METHODNAME$($METHODPARMS$) {
    $RC$ res;
    return res;
  }
  $WRITERCODE$
};
$BEGINCUT$
int main( int argc, char *argv[] ) {
  $MAINBODY$
  return 0;
}
void eq( int n, long long have, long long need ) {
  if (have == need) {
    cerr << "Case " << n << " passed." << endl;
  } else {
    cerr << "Case " << n << " failed: expected ";
    print(need);
    cerr << " received ";
    print(have);
    cerr << "." << endl;
  }
}
void eq( int n, string have, string need ) {
  if ( have == need ) {
    cerr << "Case " << n << " passed." << endl;
  } else {
    cerr << "Case " << n << " failed: expected ";
    print( need );
    cerr << " received ";
    print( have );
    cerr << "." << endl;
  }
}

template<typename T> void eq( int n, vector<T> have, vector<T> need ) {
  if ( have.size() != need.size() ) {
    cerr << "Case " << n << " failed: returned " << have.size() << " elements; expected " << need.size() << " elements.";
    print( have );
    print( need );
    return;
  }
  for ( int i = 0; i < have.size(); i++ ) {
    if ( have[i] != need[i] ) {
      cerr << "Case " << n << " failed. Expected and returned array differ in position " << i << ".";
      print( have );
      print( need );
      return;
    }
  }
  cerr << "Case " << n << " passed." << endl;
}

template<typename T> void eq( int n, T have, T need ) {
  if ( have == need ) {
    cerr << "Case " << n << " passed." << endl;
  } else {
    cerr << "Case " << n << " failed: expected ";
    print( need );
    cerr << " received ";
    print( have );
    cerr << "." << endl;
  }
}

template<typename T> void print( vector<T> a ) {
  cerr << "{";
  for ( int i = 0 ; i != a.size() ; i++ ) {
    if ( i != 0 ) cerr << ", ";
    print( a[i] );
  }
  cerr << "}" << endl;
}
$ENDCUT$
