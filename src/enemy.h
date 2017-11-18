#ifnef ENEMY_H
#define ENEMY_H

class Enemy // needs implementation
{
  public:
    unsigned int getHealth();
    void setHealth(const unsigned int newHealth);
  private:
    unsigned int health;
};

#endif
