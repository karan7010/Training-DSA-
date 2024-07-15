/*
#include <iostream>
using namespace std;

int main()
{
    // Compile time error
    cout << "Hello World" << var << endl;

    // Run time Error
    int value = 7 / 0;
    cout << "Value" << value << endl;

    return 0;
}*/

/*
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    a = a + b;
    cout << "The Sum is: " << a << endl;
    return 0;
}*/
/*
#include <iostream>
using namespace std;

int main()
{
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal
    int number3 = 0x0F;       // Hexadecimal
    int number4 = 0b00001111; // Binary

    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    cout << "number3: " << number3 << endl;
    cout << "number4: " << number4 << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    // Braced intilizers
    // Variables may contain random garbage value. WARNING
    int elephant_count;
    int lion_count;    // initilizes to zero
    int dog_count(10); // initilizes to 10
    int cat_count(15); // initilizes to 15
    // Can Use expressions as initilizers
    int domesticated_animals{dog_count + cat_count};

    // int new_number{doesn't exixt};
    int narrowing conversion{2, 9}; // Compiler error
    cout << "Elephant count :" << elephant_count << endl;
    cout << "Lion Count :" << lion_count << endl;
    cout << "Dog Count :" << elephant_count << endl;
    cout << "Cat Count :" << lion_count << endl;
    cout << "Domesticated animal count : " << domesticated_animals << endl;
    return 0;
}
/*
#include <iostream>
using namespace std;

int main()
{
    // Assignment notation
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;

    cout << "Bike Count: " << bike_count << endl;
    cout << "Truck Count: " << truck_count << endl;
    cout << "Vehicle Count: " << vehicle_count << endl;
    cout << "Narrowing_conversion_assignment" << endl;

    // Check the size with sizeof
    cout << "sizeof int: " << sizeof(int) << endl;
    cout << "sizeof truck_count : " << sizeof(truck_count) << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;
    cout << "Sum is:" << a + b;
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main()
{
    bool red_light (false);
    bool green_light (true);
    if(red_light==true)
    {
        cout<<"STOP!!"<<endl;
    }
    else
    {
        cout<<"Go through!"<<endl;
    }
    if(green_light)
    {
        cout<<"The light is green!"<<endl;
    }
    else
    {
        cout<<"The light is NOT green!"<<endl;
    }

    //sizeof()

    cout<<"sizeof(bool) : " << sizeof(bool)<<endl;
    //printing out a bool
    //1 -->> true
    //0 -->> false
    cout<<endl;
    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;
    cout<<boolalpha;
    cout<<"red_light : "<<red_light<<endl;
    cout<<"green_light : "<<green_light<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    // int bad_initilization (doesn't exist3 + doesn't exist4 );

    // Information lost, loss safe than braced initalizers
    int narrowing_conversion_functional(2.9);

    cout << "Apple  count : " << apple_count << endl;
    cout << "Orange count : " << apple_count << endl;
    cout << "Fruit count : " << apple_count << endl;
    cout << "Narrowing  conversion : " << narrowing_conversion_functional << endl; // will loose info

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Braced intilizers
    // Variables may contain random garbage value. WARNING
    int elephant_count;
    int lion_count();  // initilizes to zero
    int dog_count(10); // initilizes to 10
    int cat_count(15); // initilizes to 15
    // Can Use expressions as initilizers
    int domesticated_animals{dog_count + cat_count};

    // int new_number{doesn't exixt};
    int narrowing conversion{2, 9}; // Compiler error
    cout << "Elephant count :" << elephant_count << endl;
    cout << "Lion Count :" << lion_count << endl;
    cout << "Dog Count :" << elephant_count << endl;
    cout << "Cat Count :" << lion_count << endl;
    cout << "Domesticated animal count : " << domesticated_animals << endl;
    return 0;
}*/
