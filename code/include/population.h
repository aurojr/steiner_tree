/**
 * population.h - Implements the main actions performed in a population and its
 * individuals (solutions), such as, creation, crossover, mutation.
 * */


#ifndef _POPULATION_H_
#define _POPULATION_H_

#include "types.h"


/**
 * create_initial_population - From a common ancestor, create a population of
 * solutions based on this ancestor random mutations.
 *
 * @stein: Stein structure used to create a common ancestor.
 * */
struct list_head *create_initial_population(struct stein *stein);

/**
 * Mutations are based on a triangle inequality, i.e., when a mutation is
 * performed, it will add a non-terminal vertex to the solution as a replacement
 * to a direct edge between two terminals. The method, thus, adds two edges to the
 * solution and removes one.
 *
 * @s: Solution which will mutate.
 * @stein: Stein struct.
 * @s_head: Solution list head.
 * */
void mutation(struct solution *s, struct stein *stein, struct list_head *s_head);


/**
 * Crossover is based on an exchange of partial solutions of a population, i.e.,
 * given two solutions, part of the solution structure - the use or not of an
 * intermediate terminal - is exchanged, forming a new population.
 * */
void crossover(struct solution *s1, struct solution *s2);

#endif /* _POPULATION_H_ */
