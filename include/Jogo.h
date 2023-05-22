#pragma once
#include "Gerenciadores/Gerenciador_Grafico.h"

class Jogo
{
private:
	static Jogo* instancia;
	Jogo();
private:
	Gerenciadores::Gerenciador_Grafico* gerenciador_grafico;
public:
	Jogo(const Jogo* obj) = delete;
	~Jogo();
	static Jogo* getInstancia();
	void executar();
};