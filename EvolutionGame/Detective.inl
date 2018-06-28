int Detective::get_ren()
{
  return Rencor;
}
void Detective::set_ren(int r)
{
  Rencor = r;
}
void Detective::interactua()
{
  cout << "Soy Detective mi Personalidad es :" << endl
       << "En el primer turno te coperare, en el segundo te enganare, en tercero te coperare, y al siguiente hare lo que tu hagas." << endl;
}
bool Detective::actuando(bool ac, int turno)
{
  string ven;
  int x;
  x = get_ren();
  anteriorAc = get_acc();
  if (ac == 0)
  {
    ven = "Engañaste";
    x = x + 1;
    set_ren(x);
    if (turno == 0)
    {
      set_acc(1);
    }
    else if (turno == 1)
    {
      set_acc(0);
    }
    else if (turno == 2)
    {
      set_acc(1);
      cout << "Ahora hare lo que tu hagas en el siguiente turno." << endl;
    }
    else
    {
      set_acc(anteriorAc);
    }
  }
  else
  {
    ven = "Cooperaste";
    x = x + 1;
    set_ren(x);
    if (turno == 0)
    {
      set_acc(1);
    }
    else if (turno == 1)
    {
      set_acc(0);
    }
    else if (turno == 2)
    {
      set_acc(1);
      cout << "Ahora hare lo que tu hagas en el siguiente turno." << endl;
    }
    else
    {
      set_acc(anteriorAc);
    }
  }
}
bool Detective::get_anterior()
{
  return anteriorAc;
}