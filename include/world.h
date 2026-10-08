#ifndef WORLD_H
#define WORLD_H

/*
  This is the world program that use to determine the world size and placeholder
  for whole program
 */

typedef struct {
  int w_width;
  int w_height;

} _World;

// This is init the miniworld but later change might be included;
_World initMiniWold(int w, int h);

#endif // !WORLD_H
