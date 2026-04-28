# C++ - Module 00: Introduction to OOP Fundamentals

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![Status](https://img.shields.io/badge/Status-Complete-success?style=flat-square)

## 📖 About

**C++ Module 00** is an introductory module to Object-Oriented Programming using C++98 standard. This module marks the beginning of my C++ journey.

## 📚 Project Structure

### Exercise 00: Megaphone

**Directory:** `ex00/`

**Files:** `Makefile`, `megaphone.cpp`

**Concept:** Introduction to C++ syntax and basic program structure

A simple program that acts like a megaphone, converting all input text to uppercase.

#### Key Features
- Accepts multiple command-line arguments
- Converts strings to uppercase using `std::toupper()`
- Outputs a special message when run without arguments

#### Learning Concepts
- Basic main function and argument handling
- String manipulation with standard library
- Simple algorithm implementation in C++ style

### Exercise 01: PhoneBook

**Directory:** `ex01/`
**Files:** `Makefile`, `phonebook.hpp`, `phonebook.cpp`, `contact.hpp`, `contact.cpp`, `main.cpp`, plus utility files
**Concept:** Object-Oriented Programming with classes, member functions, and encapsulation

An interactive 1980s-style phonebook application that demonstrates core OOP principles.

#### Key Features

**Contact Class:**
- Stores contact information: first name, last name, nickname, phone number, darkest secret
- Private data members with public getter methods (encapsulation)
- Constructor and destructor for resource management
- Setter method for initializing contact data

**PhoneBook Class:**
- Manages up to 8 contacts in an array
- No dynamic allocation (static array)
- Circular replacement: oldest contact replaced when capacity exceeded
- Three main operations: ADD, SEARCH, EXIT
- Formatted display with 10-character wide columns
- Right-aligned text with truncation using dots

**Interactive Commands:**
- **ADD** - Add a new contact with validation
- **SEARCH** - View contacts in formatted table, select and display full information
- **EXIT** - Exit the program

#### Learning Concepts
- Class design and member organization (public/private)
- Constructors and destructors
- Member functions and access methods
- Data encapsulation and information hiding
- Array-based storage without dynamic memory
- User input handling and validation
- Formatted output with `iomanip`
- String manipulation

## 🚀 Usage

### Exercise 00: Megaphone

```bash
cd ex00
make
./megaphone "shhhhh... I think the students are asleep..."
```

**Examples:**

```bash
# Convert text to uppercase
./megaphone "hello world"
# Output: HELLO WORLD

# Multiple arguments
./megaphone Damnit " ! " "Sorry students"
# Output: DAMNIT ! SORRY STUDENTS

# No arguments - special message
./megaphone
# Output: * LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### Exercise 01: My Awesome PhoneBook

```bash
cd ex01
make
./phonebook
```

**Interactive Usage:**

```
Welcome to your awesome phonebook!

Please select an option:
[ADD] - Add a new contact
[SEARCH] - Search for a contact
[EXIT] - Exit the program

> ADD
First name: John
Last name: Doe
Nickname: Johnny
Phone number: 5551234567
Darkest secret: I like puppies

> SEARCH
     Index|  First Name|  Last Name|  Nickname
         0|        John|      Smith|     Johnny
         1|        Jane|      Doe  |     Janey

Enter index to display (0-7): 0
First name: John
Last name: Doe
Nickname: Johnny
Phone number: 5551234567
Darkest secret: I like puppies

> EXIT
Goodbye!
```

**Features:**
- Add contacts one field at a time with validation
- View all contacts in a formatted table
- Select specific contacts by index
- Truncation with dots for long names (max 10 characters per column)
- Circular array: 9th contact replaces 1st
- No data persistence (contacts lost on exit)

## 📝 Technical Details

### Code Standards

- **Language:** C++98 standard (compatible with C++11 check)
- **Compiler:** g++ or clang++
- **Compilation Flags:** `-Wall -Wextra -Werror -std=c++98`
- **Forbidden Functions:** `printf()`, `malloc()`, `free()` (use C++ alternatives)
- **Forbidden Keywords:** `using namespace <ns>`, `friend` (unless explicitly required)

### Data Structure

**Contact Class:**
```
- first_name      (std::string)
- last_name       (std::string)
- nickname        (std::string)
- phone_number    (int)
- darkest_secret  (std::string)
```

**PhoneBook Class:**
```
- contacts[]      (array of 8 Contact objects)
- contact_counter (int - tracks number of contacts)
```

### Memory Management

- **No dynamic allocation** in ex01 (using static arrays)
- **Stack allocation** for all objects
- Destructors handle cleanup automatically

## 👤 Author

**opopov** - 42 School Student
