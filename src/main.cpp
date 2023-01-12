#include <iostream>
#include "registry.h"

int main() {
Registry<int,std::string> r1;

r1.add(1,"apple");
r1.add(1,"peach");
r1.add(2,"chery");
r1.add (1,"pineapple");
r1.add(2,"chery");
std::vector<std::string> v = r1.find(1);
r1.print();
r1.remove(1);
r1.print();

Registry<double,std::string> r2;
r2.add (1.2,"b");
r2.add(1.1,"a");
r2.print();
r2.remove(1.1);
r2.print();


}
