#+(or ecl-min aclasp)
(eval-when (:load-toplevel)
  (process-command-line-load-eval-sequence)
  (core::select-package :core)
  (let ((core:*use-interpreter-for-eval* nil))
    (when (member :interactive *features*) (core::low-level-repl))))