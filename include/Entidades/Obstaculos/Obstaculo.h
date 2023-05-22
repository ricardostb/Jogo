#pragma once
#include "../Entidade.h"

namespace Entidades
{
	namespace Obstaculos
	{
		class Obstaculo : public Entidade
		{
		protected:
			bool danoso;
		public:
			Obstaculo();
			~Obstaculo();
			virtual void executar() = 0;
		};
	}
}