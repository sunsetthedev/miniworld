#ifndef AGENT_H
#define AGENT_H

typedef enum {
  QUEEN,
  WORKER,
  SOLDIER,
  SCOUT,
  LARVA,

} HiveRole;

typedef struct {
  char **data;
  float memorydecayrate;

} Memory;

typedef struct {
  char charrep;
  float hungerpoint;
  int age;
  int smartpoint;
  Memory memory;
  HiveRole role;

} _Ant;
static _Ant initializeAnt(char charrep, float hungerpoint, int age, int smartpoint, float memorydecayrate, HiveRole role);

void spawnAnt(_Ant *ant, int x, int y);

#endif // !AGENT_H
