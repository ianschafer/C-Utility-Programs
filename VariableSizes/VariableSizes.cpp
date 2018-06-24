/*
Program name: VariableSizes.cpp
Description: Console program that displays the size and range of all
             standard C++ data types on a particular machine.
Use: Run VariableSizes.exe from MS-DOS or Windows XP console.
Version: 3.00
Date: 2018.06.23
Author: Ian A. Schafer
*/

#include <iostream>
#include <limits>
#include <cfloat>

/*
using namespace std

Not used to illustrate use of binary Scope Resolution Operator.
*/

int main()
{

  //Logo
  std::cout << "----------------------------------------------------"<< std::endl;
  std::cout << "           VARIABLE SIZES PROGRAM   Ver 3.0"<< std::endl;
  std::cout << "----------------------------------------------------"<< std::endl;

  std::cout << std::endl;

  std::cout << "C++ data types; their sizes and ranges for this"
            << " machine:\n\n";

  std::cout << "Size of bool:\t\t";
  std::cout << sizeof(bool) << " bytes. "
            << std::numeric_limits<bool>::digits << " bit." << std::endl;

  std::cout << "Size of char:\t\t";
  std::cout << sizeof(char) << " bytes. "
            << std::numeric_limits<char>::digits << " bits." << std::endl;

//            << std::numeric_limits<char>::min() << " to " << std::numeric_limits<char>::max() << std::endl;

  std::cout << "Size of signed char:\t";
  std::cout << sizeof(signed char) << " bytes. "
            << std::numeric_limits<signed char>::digits << " bits." << std::endl;

  std::cout << "Size of unsigned char:\t";
  std::cout << sizeof(unsigned char) << " bytes. "
            << std::numeric_limits<unsigned char>::digits << " bits." << std::endl;

  std::cout << "Size of short:\t\t";
  std::cout << sizeof(short) << " bytes. "
            << std::numeric_limits<short>::digits << " bits. Range "
            << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

  std::cout << "Size of unsigned short:\t";
  std::cout << sizeof(unsigned short) << " bytes. "
            << std::numeric_limits<unsigned short>::digits << " bits. Range "
            << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;

  std::cout << "Size of int:\t\t";
  std::cout << sizeof(int) << " bytes. "
            << std::numeric_limits<int>::digits << " bits. Range "
            << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

  std::cout << "Size of unsigned int:\t";
  std::cout << sizeof(unsigned int) << " bytes. "
            << std::numeric_limits<unsigned int>::digits << " bits. Range "
            << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

  std::cout << "Size of long:\t\t";
  std::cout << sizeof(long) << " bytes. "
            << std::numeric_limits<long>::digits << " bits. Range "
            << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

  std::cout << "Size of unsigned long:\t";
  std::cout << sizeof(unsigned long) << " bytes. "
            << std::numeric_limits<unsigned long>::digits << " bits. Range "
            << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << std::endl;

  std::cout << "Size of wchar_t:\t";
  std::cout << sizeof(wchar_t) << " bytes. "
            << std::numeric_limits<wchar_t>::digits << " bits. Range "
            << std::numeric_limits<wchar_t>::min() << " to " << std::numeric_limits<wchar_t>::max() << std::endl;

  std::cout << "Size of size_t:\t\t";
  std::cout << sizeof(size_t) << " bytes. "
            << std::numeric_limits<size_t>::digits << " bits. Range "
            << std::numeric_limits<size_t>::min() << " to " << std::numeric_limits<size_t>::max() << std::endl;
  std::cout << std::endl;

  int fbits = 8*sizeof(float);
  std::cout << "Size of float:\t\t";
  std::cout << sizeof(float) << " bytes. "
            << fbits << " bits. Range "
            << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
  std::cout << std::endl;
  std::cout << "\tFLOAT uses its " << fbits << " bits as follows: \n\n\t";
  std::cout << FLT_MANT_DIG - 1 << " bits for its mantissa. \n\t";
  std::cout << fbits - FLT_MANT_DIG << " bits for its exponent. \n\t";
  std::cout << 1 << " bit for its sign. \n\t";
  std::cout << "to obtain " << FLT_DIG << " significant digits. \n\n";

  int dbits = 8*sizeof(double);
  std::cout << "Size of double:\t\t";
  std::cout << sizeof(double) << " bytes. " << dbits << " bits. Range "
            << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
  std::cout << std::endl;
  std::cout << "\tDOUBLE uses its " << dbits << " bits as follows: \n\n\t";
  std::cout << DBL_MANT_DIG - 1 << " bits for its mantissa. \n\t";
  std::cout << dbits - DBL_MANT_DIG << " bits for its exponent. \n\t";
  std::cout << 1 << " bit for its sign. \n\t";
  std::cout << "to obtain " << DBL_DIG << " significant digits. \n\n";

  int ldbits = 8*sizeof(long double);
  std::cout << "Size of long double:\t";
  std::cout << sizeof(long double) << " bytes. " << ldbits << " bits. Range "
            << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;
  std::cout << std::endl;
  std::cout << "\tLONG DOUBLE uses its " << ldbits << " bits as follows: \n\n\t";
  std::cout << LDBL_MANT_DIG - 1 << " bits for its mantissa. \n\t";
  std::cout << ldbits - LDBL_MANT_DIG << " bits for its exponent. \n\t";
  std::cout << 1 << " bit for its sign. \n\t";
  std::cout << "to obtain " << LDBL_DIG << " significant digits. \n\n";

  std::cout << std::endl;
  std::cout << "All done ... press ENTER to terminate...";
  std::cin.get();

  return 0;
}
