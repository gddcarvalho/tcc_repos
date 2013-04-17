Análise de Segurança de Redes Wireless

Trabalho de conclusão do curso de Sistemas de Informação

De: Gabriel Dutra de Carvalho

AES-Illustrated:

An implementation of the Advanced Encryption Standard (AES) algorithm meant for study to go along with "A Stick Figure Guide to the Advanced Encryption Standard (AES)" blog post at www.moserware.com

http://www.moserware.com/2009/09/stick-figure-guide-to-advanced.html

Atheme IRC Services:

atheme-services is a set of Services for IRC networks that allows users to manage their channels in a secure and efficient way and allows operators to manage various things about their networks. Unlike it's predecessor, Shrike, services has a completely reworked form of channel management that feels somewhat like eggdrop and is somewhat more useful.

Services currently works with many irc daemons. More details are available in the config file.

Internally, atheme-services shares more similarities with ircd than it does with IRCServices. Anope/Epona, Cygnus, OperStats, Hybserv, Theia, etc are all based on IRCServices and as such have very old legacy code that none of the authors, except Church truly understand. Atheme was written completely from scratch with the more complex concepts taken from various modern ircd packages, including ircu, ircd-ratbox, hybrid and bahamut.

atheme-services is not a drop-in replacement for Anope or Andy Church's IRC Services. It is designed with an entirely different set of goals and as such should not be migrated to with the expectation that it will behave exactly like what was previously implemented. Atheme is designed to act as a directory server, with alternative ways of getting to the data implemented as well as the IRC presence.

http://atheme.net
