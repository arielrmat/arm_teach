(require 'package)
(add-to-list 'package-archives
             '("melpa" . "http://melpa.org/packages/") t)
(package-initialize)

(setq mis-paquetes '(dashboard yasnippet yasnippet-snippets flycheck company lsp-mode lsp-ui treemacs ))

(when (cl-find-if-not #'package-installed-p mis-paquetes)
  (package-refresh-contents)
  (mapc #'package-install mis-paquetes))

(require 'yasnippet)
(yas-global-mode 1)

(tool-bar-mode -1)
(tooltip-mode -1)
(set-fringe-mode 4)
(menu-bar-mode -1)

(setq visible-bell t)
(setq column-number-mode t)
(setq line-number-mode t)

; Modificar el buffer inicial
(require 'dashboard)
(dashboard-setup-startup-hook)
(setq dashboard-items '((recents  . 5)))

(add-hook 'c++-mode-hook (lambda () (setq flycheck-gcc-language-standard "c++17")))
(add-hook 'prog-mode-hook 'display-line-numbers-mode)

(defun compilar-ejecutar-cpp()
  (interactive)
  (defvar exec-cpp)
  (setq exec-cpp (concat "g++ -x c++ -g -O2 -std=c++17 " (buffer-name) " -o " (file-name-base buffer-file-name) " && " (file-name-base buffer-file-name) ".exe" ))
  (async-shell-command exec-cpp ))

(defun open-shell-window ()
  (interactive)
  (let ((buf (shell)))
    (switch-to-buffer (other-buffer buf))
    (switch-to-buffer-other-window buf)))

(global-set-key [C-f1] 'compilar-ejecutar-cpp)
(global-set-key [C-f4] 'open-shell-window)