;;; .dir-locals.el --- 

;; Copyright (C) 2015  Kazuki Kikuti

;; Author: Kazuki Kikuti <ery@EDEN2-ubuntu>
;; Keywords: 

;; This program is free software; you can redistribute it and/or modify
;; it under the terms of the GNU General Public License as published by
;; the Free Software Foundation, either version 3 of the License, or
;; (at your option) any later version.

;; This program is distributed in the hope that it will be useful,
;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;; GNU General Public License for more details.

;; You should have received a copy of the GNU General Public License
;; along with this program.  If not, see <http://www.gnu.org/licenses/>.

;;; Commentary:

;; 

;;; Code:

;;(defvar gud-gdb-command-name "arm-none-linux-gnueabi-gdb")

;;(add-dir-local-variable (gud-gdb-command-name . "arm-none-eabi-gdb -i=mi"))
;;(dir-locals-set-class-variables gud-gdb-command-name "arm-none-eabi-gdb -i=mi")

;;(message "SET DIR VARIABLES")

;;(gdb-mode . ((gud-gdb-command-name . "arm-none-eabi-gdb"))

(
 (nil . (
         (gud-gdb-command-name . "arm-none-eabi-gdb -i=mi -x /home/ery/local_devel/UGV/gdb_commandfile")
         )
      )
 (c++-mode . (
              (compile-command . "make -C /home/ery/local_devel/UGV/build")
              )
          )
 (c-mode . (
            (compile-command . "make -C /home/ery/local_devel/UGV/build")
            )
         )
 )


;;(message "GDB MODE SET")

;;; .dir-locals.el ends here
