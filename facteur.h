/**
* @file facteur.h
* @author Nicolas EMERI & Bryan LIBOUREL
* @details surcharge de l'operateur <<
*/

#ifndef DEF_FACTEUR
#define DEF_FACTEUR

/**
* @class facteur facteur.h "./facteur.h"
*/
class facteur {

	private:
		char* texte;
		char* couleur;
		char* texteFormate;

	public:
		facteur(char* text); /** @fn Constructeur de facteur */
		~facteur(); /** @fn Destructeur de facteur */
		void setTexte(char* text); /** @fn Definir le texte  */
		char* getTexte(); /** @fn Retourne le texte du facteur */
		char* getTexteFormate(); /** @fn Retourne le texte du facteur formaté avec la couleur */
		void setCouleur (char* color); /** @fn Definir la couleur */
		void formate(); /** @fn Formate puis stock le texte */
};

ostream& operator<<(ostream &flux, Duree const& facteur); /** @fn Surcharge l'operateur << */

#endif
