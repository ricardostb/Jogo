#include "../include/Jogo.h"

Jogo* Jogo::instancia = NULL;

Jogo::Jogo()
{
	gerenciador_grafico = Gerenciadores::Gerenciador_Grafico::getInstancia();
	executar();
}

Jogo::~Jogo()
{

}

Jogo* Jogo::getInstancia()
{
	if (instancia == NULL)
	{
		instancia = new Jogo;
	}

	return instancia;
}

void Jogo::executar()
{
	gerenciador_grafico->executar();
}