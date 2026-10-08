#ifndef AGENT_H
#define AGENT_H

typedef enum {
  TRAVELLER,
  FARMER,
  FIGHTER,
  SHOPKEEPER,
  MOTHER,

} Purpose;

typedef struct {
  char **data;

} Memory;

typedef struct {
  char charrep;
  float hungerpoint;
  int age;
  int smartpoint;
  Memory memory;

} _Agent;

#endif // !AGENT_H
