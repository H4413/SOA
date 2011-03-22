==================================
Spécification des services métiers
==================================


SM 1 Consulter la liste de contacts prévus
===========================================

Objet Métier
------------

	Agence, Client
	
Entrées
-------
	
	id agence
	
Sorties
-------	
	
	Liste (Numero contact, nom client, motif contact, agent habituel)
	
	Procédure:
		Rechercher les clients de l'agence : SOM Agence 1
		Pour chaque client, recherche les nom clients : SOM Client 1
		Pour chaque client, recherche l'agent habituel : SOM Client 2
		
SM 2 Consulter la liste de profils des agents
==============================================

Objet Métier
------------

	Agence
	
Entrées
-------
	
	id agent
	
Sorties
-------	
	
	Liste (Id agent, nom agent, disponibilité, caractéristique)
	
SM 3 Affecter contact
======================

Objet Métier
------------

	Contact
	
Entrées
-------
	
	id contact, id agent
	
Sorties
-------	
	
	Aucune.
	
SM 4 Regrouper contacts
========================

Objet Métier
------------

	Contact
	
Entrées
-------
	
	Liste(id contacts)
	
Sorties
-------	
	
	id contacts regroupés
	
SM 5 Annuler contact
=====================

Objet Métier
------------

	Contact
	
Entrées
-------
	
	id contact, raison
	
Sorties
-------	
	
	Aucune.

SM 6 Consultation Liste Activités
=================================

Objet Métier
------------
	
	Agence
	
Entrées
-------
	
Sorties
-------	

SM 7 Valider Planification et Calcul Temps Libre Agent
======================================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 8 Identifier Contact
=======================================

Objet Métier
------------
	
	Contact
	
Entrées
-------
	
Sorties
-------	
	
SM 9 Création RDV
=================

Objet Métier
------------
	
	Agenda
	
Entrées
-------

	id Client, id Semaine, id Jour
	
Sorties
-------	
	
SM 10 Générer Contact Commercial
================================

Objet Métier
------------
	
	Contact
	
Entrées
-------
	
	contact, plage
	
Sorties
-------	
	
SM 11 Générer Contact Spontané
==============================

Objet Métier
------------
	
	Contact
	
Entrées
-------

	agent, client, plage, type
	
Sorties
-------	
	
SM 12 Liste Agents
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 13 Récupérer Agenda Agent
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 14 Liste Agents Disponibles
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 15 Réaffectation RDV
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 16 Annuler RDV
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 17 Modifier Date RDV
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 18 Sélectionner contact
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 19 Consulter Dossier Client
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 20 MAJ Dossier Client
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 21 Consulter Offres
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 22 Sélectionner Offres
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 23 Ajouter Information CR
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 24 Consulter CR
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 25 Proposer Offres
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 26 Rédiger RAC
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 27 Lister Client
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 28 Identifier Client
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 29 Consulte Bilan
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 30 Consulter Produits
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 31 Consulter Relations
=======================================

Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	