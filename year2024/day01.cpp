#include <fstream>
#include <iostream>
#include <string>

int get_potions(char c) {
    switch (c)
    {
    case 'B':
        return 1;
    case 'C':
        return 3;
    case 'D':
        return 5;
    }

    return 0;
}

void part1() {
    std::ifstream file("day01_1.in");
    char c;

    int potions = 0;

    while (file >> c) {
        potions += get_potions(c);
    }

    std::cout << "Part 1: " << potions << std::endl;
}

void part2() {
    std::ifstream file("day01_2.in");
    char c, d;

    int potions = 0;

    while (file >> c) {
        file >> d;

        potions += get_potions(c);
        potions += get_potions(d);

        if (c != 'x' && d != 'x') {
            potions += 2;
        }
    }

    std::cout << "Part 2: " << potions << std::endl;
}

void part3() {
    std::ifstream file("day01_3.in");
    char c, d, e;

    int potions = 0;

    while (file >> c) {
        file >> d;
        file >> e;

        potions += get_potions(c);
        potions += get_potions(d);
        potions += get_potions(e);

        int non_empty_count = (c != 'x') + (d != 'x') + (e != 'x');

        if (non_empty_count == 3) {
            potions += 6;
        } else if (non_empty_count == 2) {
            potions += 2;
        }
    }

    std::cout << "Part 3: " << potions << std::endl;
}

int main() {
    part1();
    part2();
    part3();
}
