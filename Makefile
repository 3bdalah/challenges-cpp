.PHONY: clean All

All:
	@echo "----------Building project:[ A_Anton_and_Danik - Debug ]----------"
	@cd "A_Anton_and_Danik" && "$(MAKE)" -f  "A_Anton_and_Danik.mk"
clean:
	@echo "----------Cleaning project:[ A_Anton_and_Danik - Debug ]----------"
	@cd "A_Anton_and_Danik" && "$(MAKE)" -f  "A_Anton_and_Danik.mk" clean
