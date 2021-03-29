SELECT * FROM cadastro.assistantes;
alter table assistantes
drop column prenom;
desc assistantes;
alter table assistantes
ADD COLUMN prenom varchar(45) AFTER nom;
DESC assistantes;
ALTER TABLE assistantes
DROP COLUMN nom;
DESC assistantes;
ALTER TABLE assistantes
ADD COLUMN nom varchar(20) AFTER prenom;
DESC assistates;



