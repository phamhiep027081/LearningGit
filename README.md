# LearningGit
git add .			Them file moi
git commit -m "message"		Them content change
git push			Day len github

git fetch			Xem có sự thay đổi mới không
git pull
git checkout brachName		Chuyen đến brachName

Khi có thay đổi trên nhánh khác, mà muốn kết hợp:
	+ git merge brachName		//Kết hợp brachName vào brach main
	+ git push

Khi thay đổi trên github:
	+ git fetch		//Kiểm tra sự thay đổi
	+ git pull		//Lấy thay đổi mới về computer

Khi có sự thay đổi mới nhưng không muốn đẩy lên git hoặc chuyển về commit cũ:
	+ git restore .
	+(or) git reset --h	(chỉ xóa các status thay đổi ở file đã tồn tại)
	+ git clean -dxf	(xóa status là các file mới được tạo)
Xem lại các commit:
	+ git log
