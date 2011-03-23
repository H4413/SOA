==================================
Spécification des services métiers
==================================


SM 1 Consulter la liste de contacts prévus
===========================================

Service Objet Métier
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

Description
-----------
		
SM 2 Consulter la liste de profils des agents
==============================================

Service Objet Métier
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

Service Objet Métier
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

Service Objet Métier
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

Service Objet Métier
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

Service Objet Métier
------------
	
	Agence
	
Entrées
-------
	
Sorties
-------	

SM 7 Valider Planification et Calcul Temps Libre Agent
======================================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 8 Identifier Contact
=======================================

Service Objet Métier
------------
	
	Contact
	
Entrées
-------
	
Sorties
-------	
	
SM 9 Création RDV
=================

Service Objet Métier
------------
	
	Agenda
	
Entrées
-------

	id Client, id Semaine, id Jour
	
Sorties
-------	
	
SM 10 Générer Contact Commercial
================================

Service Objet Métier
------------
	
	Contact
	
Entrées
-------
	
	contact, plage
	
Sorties
-------	
	
SM 11 Générer Contact Spontané
==============================

Service Objet Métier
------------
	
	Contact
	
Entrées
-------

	agent, client, plage, type
	
Sorties
-------	
	
SM 12 Liste Agents
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 13 Récupérer Agenda Agent
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 14 Liste Agents Disponibles
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 15 Réaffectation RDV
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 16 Annuler RDV
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 17 Modifier Date RDV
=======================================

Service Objet Métier
------------
	
Entrées
-------
	
Sorties
-------	
	
SM 18 Sélectionner contact
=======================================

Service Objet Métier
------------
	
	Client, Contact

Entrées
-------

	idContact
	
Sorties
-------	

	idClient
	
SM 19 Consulter Dossier Client
=======================================

Description
-----------

Ce service métier va permettre de consulter l'ensemble des informations que contient
le dossier client. Elles sont reparties en 3 catégories. (CU10)
Correspond plus précisément aux SM 29,30,31

Service Objet Métier
------------

	Client
	
Entrées
-------

	idClient
	
Sorties
-------	

	- bilan : informations spécifiques et informations sur les cotations du client
	- produits : produits que possède le client à la banque ou non
	- relations : historique des évenements, incidents et informations diverses

	
SM 20 MAJ Dossier Client
=======================================

Description
-----------

Ce service métier va permettre de modifier les informations sur le client. 
Notamment ses informations spécifiques ou sa cotation.

Service Objet Métier
------------

	Client, Adresse	

Entrées
-------

	- nouvellesInfos : informations spécifiques et informations sur les 
cotations du client à modifier
	- nouvellesAdresses : adresses éventuelles à modifier
	
Sorties
-------	
	
	Aucune 

SM 21 Consulter Offres
=======================================

Description
-----------

Ce service métier va permettre de consulter l'ensemble des offres que la banque propose


Service Objet Métier
------------
	
	Offre
Entrées
-------
	
	Aucune

Sorties
-------	

	- listeOffres : la liste des Offres proposées
	
SM 22 Faire Proposition
=======================================

Description
-----------

Ce service métier va permettre d'établir des propositions commerciales à partir
d'offres du catalogue lors du rendez-vous client.


Service Objet Métier
------------
	
	Contact

Entrées
-------

	- idContact : l'id du contact auquel s'adresse la proposition
	- idOffres : les id des offres concernées par la proposition
	
Sorties
-------	

	Aucune
	
SM 23 Ajouter Information CR
=======================================

Description
-----------

Ce service métier va permettre d'ajouter des informations au Compte Rendu de 
préparation du dossier Client. 

Service Objet Métier
-------------------
	
	Contact

Entrées
-------

	- idContact : l'id du contact dont on rédige le CR de préparation
	- infos : informations à mentionner dans le CR
	
Sorties
-------	

	Aucune
	
SM 24 Consulter CR
=======================================

Description
-----------

Ce service métier va permettre de consulter le CR de préparation d'un entretien
 pour un contact.

Service Objet Métier
------------

	Contact
	
Entrées
-------

	- idContact : l'id du contact
	
Sorties
-------	

	- CR : compte rendu de préparation
	
SM 25 Préparer Proposition
=======================================

Description
-----------

Ce service métier va permettre de préparer des propositions commerciales dans 
le CR.

Service Objet Métier
--------------------
	
	Contact

Entrées
-------
	
	- idContact : l'id du contact
	- idOffres : l'id des offres sur laquel est basé la proposition commerciale

Sorties
-------	

	Aucune
	
SM 26 Rédiger RAC
=======================================

Description
-----------

Ce service métier va permettre de rédiger le RAC à la suite d'un entretien 
métier.

Service Objet Métier
------------
	
	Contact 

Entrées
-------

	- idContact : l'id du contact
	- infos : Informations à faire mentionner dans le RAC notamment la date de 
l'entretien, l'agent, la personne rencontrée, les propositions faites aux clients et
les résultats en termes de produits souscrits
	
Sorties
-------	

	Aucune
	
SM 27 Lister Client
=======================================

Description
-----------

	Ce service va permettre de lister l'ensemble des clients de la banque.


Service Objet Métier
------------
	
	Client

Entrées
-------

	Aucune
	
Sorties
-------	

	- listesClient : liste qui contient des dénominations et des id clients.
	
SM 29 Consulter Bilan
=======================================

Description
-----------

Ce service permet de charger les informations spécifiques et les informations
sur la cotation du client.

Service Objet Métier
------------

	Client

Entrées
-------

	- idClient : l'id du Client
	
Sorties
-------	

	- informations Spéciques : informations spécifiques sur le client
	- informations Cotations : informations sur la cotation du client
	
SM 30 Consulter Produits
=======================================

Description
-----------

Ce service permet de consulter les produits souscripts par le client à la 
banque ou à la concurrence

Service Objet Métier
------------
	
	Client	


Entrées
-------

	- idClient : l'id du Client
	
Sorties
-------	

	- listesProduitsSouscripts : listes des produits souscripts à la banque
et à la concurrence

SM 31 Consulter Relations
=======================================

Description
-----------

Ce service permet de consulter les informations sur les relations entre le 
client et sa banque.

Service Objet Métier
------------

	Client
	
Entrées
-------
	
	- idClient : l'id du Client

Sorties
-------	

	- historique : historique des contacts 
	- rapports : comprend notamment les propositions faites ou à faire, 
l'historique des contacts réalisés, incidents antérieurs, événements à venir et 
les réclamations faites par le client.
	
SM 32 Consulter Produit
=======================================

Description
-----------

Ce service permet de consulter les informations sur un produit souscript
par un client ainsi que ses informations.

Service Objet Métier
------------
	
	Client, Offre

Entrées
-------

	- idClient : l'id du Client
	- idProduit : l'id du produit	

Sorties
-------	

	- Produit : information sur le produit que le client utilise (solde ...)
	- Informations : information sur les conditions d'utilisation du produit
souscript
	
