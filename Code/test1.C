void test() {

  int a = 0;
  if (true) {
    int a = 5;
  } else {
    int a = 10;
  }
 
  out << "A=" << a << endl;

}