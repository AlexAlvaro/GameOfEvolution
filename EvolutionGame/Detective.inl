void Detective::interactua()
{
  cout << "Soy Detective mi Personalidad es :" << endl
  << "En el primer turno te coperare, en el segundo te enganare, en tercero te coperare, y al siguiente hare lo que tu hagas." << endl;
}
bool Detective::actuando(bool ac, int turno)
{
  anteriorAc = get_acc();
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
  }
  else
  {
    set_acc(anteriorAc);
  }
}
bool Detective::get_anterior()
{
  return anteriorAc;
}