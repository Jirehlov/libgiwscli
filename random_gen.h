/*Version 2.6.6*/

#ifndef RANDOM_GEN_H
#define RANDOM_GEN_H 1
#include <random>

namespace giwscli {
extern std::random_device seed_gen;
extern unsigned int seed_r;
extern unsigned long long int seed_t;
extern size_t seed;
extern std::mt19937_64 generatorz;
}  // namespace giwscli

#endif
