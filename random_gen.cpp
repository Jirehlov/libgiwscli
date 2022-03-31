/*Version 2.6.5*/

#include "random_gen.h"

#include <chrono>
#include <random>

std::random_device giwscli::seed_gen;
unsigned int giwscli::seed_r = giwscli::seed_gen() % 10000000;
unsigned long long int giwscli::seed_t =
    static_cast<unsigned long long int>(
        std::chrono::high_resolution_clock::now().time_since_epoch().count()) *
    static_cast<unsigned long long int>(100000);
size_t giwscli::seed =
    static_cast<size_t>(giwscli::seed_t) + static_cast<size_t>(giwscli::seed_r);
std::mt19937_64 giwscli::generatorz(giwscli::seed);
