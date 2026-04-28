# C++ - Module 00: Introduction to OOP Fundamentals

![42 school](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white)
![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
![Standard](https://img.shields.io/badge/Standard-C%2B%2B98-blue?style=flat-square)
![Status](https://img.shields.io/badge/Status-Complete-success?style=flat-square)

## 📖 About

**C++ Module 00** is an introductory module to Object-Oriented Programming using C++98 standard. This module marks the beginning of your C++ journey and covers fundamental concepts including namespaces, classes, member functions, stdio streams, initialization lists, and the `static` and `const` keywords.

Through three progressive exercises, you will build a foundation in C++ OOP principles that will prepare you for more advanced C++ modules.

## 🎯 Learning Objectives

By completing this module, you will:

- ✅ Understand C++ namespaces and their purpose
- ✅ Learn to design and implement classes with proper encapsulation
- ✅ Master member functions, constructors, and destructors
- ✅ Use std::string and std::cout for C++-style I/O
- ✅ Understand initialization lists and their advantages
- ✅ Work with `const` and `static` keywords effectively
- ✅ Transition from C-style to C++-style programming practices
- ✅ Implement a complete interactive program with user input handling

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
- Uses `std::cout` for output instead of `printf()`

#### Learning Concepts
- Basic main function and argument handling
- String manipulation with standard library
- C++ output streams (`std::cout`)
- Simple algorithm implementation in C++ style

### Exercise 01: My Awesome PhoneBook

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

### Exercise 02: The Job Of Your Dreams

**Directory:** `ex02/` (Optional - not required for module completion)
**Concept:** Understanding class implementation through reverse engineering

A bonus exercise where you recreate a lost source file using a header file and log file as references.

## 🛠️ Compilation

### Building the Project

To compile all exercises, navigate to each directory and run:

```bash
cd ex00
make
```

```bash
cd ../ex01
make
```

### Available Make Targets

- `make` or `make all` - Compile the program
- `make clean` - Remove object files
- `make fclean` - Remove object files and the executable
- `make re` - Recompile everything from scratch

### Compiler Settings

All programs are compiled with:
- **Compiler:** `c++`
- **Flags:** `-Wall -Wextra -Werror`
- **Standard:** `-std=c++98` (compatible)

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
     Index|First Name| Last Name|  Nickname
         0|      John|       Doe|     Johnny
         1|      Jane|       Doe|     Janey

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

## 📊 Key Concepts Explained

### Classes and Objects

Classes are blueprints for creating objects. They bundle data (attributes) and behavior (methods) together.

```cpp
class Contact {
private:
    std::string first_name;  // Data members
public:
    void setName(std::string name);  // Member function
};
```

### Encapsulation

Data is marked `private` to hide implementation details. Access is provided through public methods (getters/setters).

```cpp
Contact contact;
contact.first_name = "John";  // ❌ Error: private member
contact.setName("John");      // ✅ Correct: using public method
```

### Constructors and Destructors

- **Constructor** (`Contact()`) - Called when object is created, initializes data
- **Destructor** (`~Contact()`) - Called when object is destroyed, cleans up resources

```cpp
Contact::Contact() {
    phone_number = 0;  // Initialize
}

Contact::~Contact() {
    // Cleanup if needed
}
```

### Member Functions

Functions that belong to a class and can access its data members.

```cpp
std::string Contact::get_first_name() {
    return first_name;
}
```

### Static and Const Keywords

- **`const`** - Marks variables/functions as unchangeable
- **`static`** - Variables belonging to the class, not individual instances (used for counters, etc.)

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

## 🎓 Important Notes

### Why C++98?

This module uses C++98 to establish fundamental OOP principles without modern C++ features. This helps you:
- Master core concepts before advanced features
- Understand what modern C++ simplifies
- Write code compatible with legacy systems

### Best Practices Applied

✅ **Proper encapsulation** - Public interface, private implementation
✅ **Meaningful names** - Clear class and method names
✅ **Comments** - 42 header format with metadata
✅ **Error handling** - Input validation and user feedback
✅ **Clean code** - No memory leaks, proper resource management

### Common Pitfalls to Avoid

❌ Using `using namespace std;` (explicitly use `std::`)
❌ Mixing C-style I/O (`printf`) with C++ streams (`std::cout`)
❌ Forgetting to initialize member variables in constructors
❌ Not validating user input
❌ Dynamic allocation without proper cleanup

## 🔗 Recommended Learning Resources

- [cplusplus.com - C++ Tutorials](http://www.cplusplus.com/doc/tutorial/)
- [cplusplus.com - String Reference](http://www.cplusplus.com/reference/string/string/)
- [cplusplus.com - IOManip Reference](http://www.cplusplus.com/reference/iomanip/)
- C++ Primer (book) - Excellent for OOP fundamentals

## 📋 Submission Checklist

Before submitting your module:

- [ ] All files compile without warnings (`-Wall -Wextra -Werror`)
- [ ] Code compiles with `-std=c++98` flag
- [ ] No forbidden functions used (`printf`, `malloc`, `free`)
- [ ] No `using namespace` statements
- [ ] All classes have proper constructors/destructors
- [ ] Private members where appropriate
- [ ] No memory leaks
- [ ] Meaningful variable/function names
- [ ] 42 header format on all files

## 👤 Author

**opopov** - 42 School Student

---

## 📞 Support

If you encounter issues:

1. **Compilation errors** - Check includes and make sure all headers are present
2. **Runtime errors** - Add debug output with `std::cerr`
3. **Logic errors** - Test incrementally with simple inputs
4. **Peer learning** - Ask classmates how they approached the problem

Remember: The learning journey is more valuable than the solution itself! 🚀
