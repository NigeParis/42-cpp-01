# 42-cpp-01
# Welcome to the Spooky World of C++! 🎃👻

Say hello to **CPP Module 01**! It’s a magical collection of exercises to transport you into the enchanted realm of C++. Here, you’ll discover the secrets of memory allocation, unlock the mysteries of pointers to members, master the art of references, and conquer the powerful switch statements.

## Exercise 00: BraiiiiiiinnnzzzZ 🧟‍♂️

**Objective**: Bring the undead to life by creating a zombie class! Your mission, should you choose to accept it, includes:

1. **Zombie Characteristics**:
   - **Name**: Every zombie needs a cool (or spooky) name! This will be stored as a string attribute.

2. **Zombie Announcements**:
   - **`void announce(void)`**: Each zombie must introduce themselves with flair by saying: `NameOfTheZombie: BraiiiiiiinnnzzzZ...`

3. **Zombie Creation**:
   - **`Zombie* newZombie(std::string name)`**: This function will summon a new zombie, bestow it with a name, and return the terrifying creature to you.
   - **`void randomChump(std::string name)`**: This function will randomly summon a zombie, name it, and have it proudly announce its arrival.

The true magic of these exercises lies in understanding how to allocate memory either on the stack or the heap. You'll become a wizard of memory management!

## Files You’ll Need:
- **Makefile**: The spellbook that compiles your code.
- **main.cpp**: The grand stage where your zombies come to life.
- **Zombie.cpp**: The hidden chamber where you define your zombie class.
- **newZombie.cpp**: The secret lair where new zombies are created.
- **randomChump.cpp**: The surprise party room where random zombies are summoned.
- **Zombie.hpp**: The ancient scroll that contains the declarations of your zombie class.

**Forbidden Spells**: None! You’re free to unleash your creativity with no restrictions!



## Exercise 01: Moar Brainz! 🧟‍♂️🧠

**Objective**: Summon a massive horde of zombies in this thrilling exercise! Get ready to unleash an army of the undead.

To conjure up your terrifying legion, you need to implement the following magical function:

```cpp
Zombie* zombieHorde(int N, std::string name);
```

## Exercise 02: HI THIS IS BRAIN 🧠🎉

**Objective**: Dive into the fascinating world of C++ references and address pointers! Let's unravel the mysteries together.

## Mission Brief:
We need to create a program that showcases the difference between references and address pointers. Here's what you need to include in your code:

1. **String Setup**:
   - A string initialized to `"HI THIS IS BRAIN"`.

2. **Pointers and References**:
   - **`stringPTR`**: A pointer to our brainy string.
   - **`stringREF`**: A reference to the same string.

## The Program's Tasks:
Our program should print out the following:

1. The **memory address** of the string variable.
2. The **memory address** held by `stringPTR`.
3. The **memory address** held by `stringREF`.
4. The **value** of the string variable.
5. The **value** pointed to by `stringPTR`.
6. The **value** pointed to by `stringREF`.

## Files You’ll Need:
- **Makefile**: The enchanted spellbook that compiles your code.
- **main.cpp**: The grand stage where our references and pointers perform their magic.

**Forbidden Spells**: None! You have complete creative freedom.

## Exercise 03: Unnecessary Violence ⚔️

## Objective
The goal of this exercise is to master the art of implementing pointers and references, and understanding when each is most appropriate in various situations.

## Step 1: Weapon Class
First, we need to create a mighty **Weapon** class. This class requires:

- A private string attribute **type**.
- A `getType()` member function that returns a **const reference** to **type**.
- A `setType()` member function that sets **type** using a new value passed as a parameter.

## Step 2: HumanA and HumanB Classes
Next, we will forge two powerful classes: **HumanA** and **HumanB**. These classes should include:

- A **Weapon**.
- A private string **name**.
- An `attack()` member function that displays the battle cry:

```cpp
<name> attacks with their <weapon type>
```


### Differences Between HumanA and HumanB
Although similar, **HumanA** and **HumanB** have key distinctions:

- **HumanA**: Takes the **Weapon** in its constructor and will always have a weapon.
- **HumanB**: Does not take the **Weapon** in its constructor and may not always have a weapon.

## Files You’ll Need
- **Makefile**: The enchanted spellbook that compiles your code.
- **main.cpp**: The battlefield where your warriors come to life.
- **Weapon.cpp**: The armory where you define your **Weapon** class.
- **HumanA.cpp**: The training ground for **HumanA**.
- **HumanB.cpp**: The training ground for **HumanB**.
- **Weapon.hpp**: The ancient scroll containing the declarations of your **Weapon** class.
- **HumanA.hpp**: The scroll for **HumanA**.
- **HumanB.hpp**: The scroll for **HumanB**.

**Forbidden Spells**: None! You're free to explore and innovate.

## Exercise 04: Sed is for Losers 🚫

**Objective**: Say goodbye to boring text replacements with Sed! Instead, let's create a program that takes three magical parameters: a filename and two strings, `s1` and `s2`. When executed, the program will open the file, copy its contents, and replace every occurrence of `s1` with `s2`. It's like performing a text replacement spell!

## Files You’ll Need:
- **Makefile**: The enchanted spellbook that compiles your code.
- **main.cpp**: The mystical script where your text-replacing magic happens.

**Forbidden Spells**: You must resist the temptation to use `std::string::replace`. We need to do this the old-fashioned, fun way!

---

## Exercise 05: Harl 2.0 🗣️

**Objective**: Let's bring Harl to life with a program that features a class named **Harl**. This class will include the following private incantations (member functions):

- **`void debug(void)`**: For when Harl is in a mellow mood.
- **`void info(void)`**: When Harl has something interesting to share.
- **`void warning(void)`**: When things start to get a bit dicey.
- **`void error(void)`**: When Harl is in full panic mode.

These functions represent the different levels of messages that Harl can communicate. Additionally, Harl will have a public spell:

- **`void complain(std::string level)`**: This spell will invoke the correct function depending on the level passed as a parameter. The true magic here is learning to use pointers to member functions, so we can avoid a labyrinth of if/else statements!

## Files You’ll Need:
- **Makefile**: The enchanted spellbook that compiles your code.
- **main.cpp**: The grand arena where Harl voices his thoughts.

**Forbidden Spells**: None! Let your imagination run wild.

---

## Exercise 06: Harl Filter 🕵️‍♂️

**Objective**: Get ready to filter out Harl's chatter! This exercise will help you create a refined version of Harl that only lets certain messages pass through. Details coming soon!

## Files You’ll Need:
- **Makefile**: The enchanted spellbook that compiles your code.
- **main.cpp**: The stage where Harl's filtered messages will be revealed.

**Forbidden Spells**: None! Feel free to get creative.

---

Dive into these exercises with enthusiasm and a sense of adventure. Happy coding! 🌟



