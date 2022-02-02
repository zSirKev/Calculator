//"EasyCalculator" with Color

#include <iostream>
#include <cstring>
using namespace std;
int
main ()
{

//Storage
  char re, restart[1];
  char ch, choice[1];

//Introductory Text
  cout << endl << "Welcome to: ";
  cout << "\033[3;32m" << "EasyCalculator!" << endl;
  cout << "\033[0;37m" << "By: ";
  cout << "\033[3;36m" << "Kevin Zurita" << endl << endl;

//Warning Text
  cout << "\033[1;31m" <<
    "WARNING: EasyCalculator is Case-Sensitive, so please type all of your answers in lowercase!"
    << endl << endl;

//Calculation Choice
start:
  cout << endl << "\033[0;37m" <<
    "Would you like to add(+), subtract(-), multiply(*), divide(/), or modulo(%)?"
    << endl << endl;
  cin >> choice;
  cout << endl << "\033[0;35m" << "Ok, Lets " << choice << "!" << endl <<
    endl;
  cout << "\033[0;37m";

  if (!strcmp (choice, "add"))
    goto add;
  if (!strcmp (choice, "subtract"))
    goto subtract;
  if (!strcmp (choice, "multiply"))
    goto multiply;
  if (!strcmp (choice, "divide"))
    goto divide;
  if (!strcmp (choice, "modulo"))
    goto modulo;

//Addition Code
add:
  int x, y;
  int z;
  cout << "What is the first number? ";
  cin >> x;
  cout << "What is the second number? ";
  cin >> y;
  z = x + y;
  cout << "\033[0;34m" << "Answer: " << x << " + " << y << " = " << z << endl
    << endl;
  cout << "\033[0;37m";

  cout << "Want to try another calculation (yes or no) ";
  cin >> restart;
  if (!strcmp (restart, "yes"))
    goto start;
  if (!strcmp (restart, "no"))
    goto end;

//Subtraction Code
subtract:
  int i, o;
  int p;
  cout << "What is the first number? ";
  cin >> i;
  cout << "What is the second number? ";
  cin >> o;
  p = i - o;
  cout << "\033[0;34m" << "Answer: " << i << " - " << o << " = " << p << endl
    << endl;
  cout << "\033[0;37m";

  cout << "Want to try another calculation (yes or no) ";
  cin >> restart;
  if (!strcmp (restart, "yes"))
    goto start;
  if (!strcmp (restart, "no"))
    goto end;

//Multiplication Code
multiply:
  int q, w;
  int e;
  cout << "What is the first number? ";
  cin >> q;
  cout << "What is the second number? ";
  cin >> w;
  e = q * w;
  cout << "\033[0;34m" << "Answer: " << q << " * " << w << " = " << e << endl
    << endl;
  cout << "\033[0;37m";

  cout << "Want to try again (yes or no) ";
  cin >> restart;
  if (!strcmp (restart, "yes"))
    goto start;
  if (!strcmp (restart, "no"))
    goto end;

//Division Code
divide:
  int t, u;
  int v;
  cout << "What is the first number? ";
  cin >> t;
  cout << "What is the second number? ";
  cin >> u;
  v = t / u;
  cout << "\033[0;34m" << "Answer: " << t << " / " << u << " = " << v << endl
    << endl;
  cout << "\033[0;37m";

  cout << "Want to try another calculation (yes or no) ";
  cin >> restart;
  if (!strcmp (restart, "yes"))
    goto start;
  if (!strcmp (restart, "no"))
    goto end;

//Modulo Code
modulo:
  int l, s;
  int c;
  cout << "What is the first number? ";
  cin >> l;
  cout << "What is the second number? ";
  cin >> s;
  c = l % s;
  cout << "\033[0;34m" << "Answer: " << l << " % " << s << " = " << c << endl
    << endl;
  cout << "\033[0;37m";

  cout << "Want to try again (yes or no) ";
  cin >> restart;
  if (!strcmp (restart, "yes"))
    goto start;
  if (!strcmp (restart, "no"))
    goto end;

//Ending and Credits
end:
  cout << endl << "\033[0;35m" << "Ok, see you later!" << endl;
  cout << endl << endl << endl << "\033[3;32m" << "EasyCalculator ";
  cout << "\033[0;37m" << "brought to you By: ";
  cout << "\033[3;36m" << "Kevin Zurita" << endl;

//Program Ends
  return 0;
}