@api @drupal
Feature: Test DrupalContext
  In order to prove the Drupal context using the blackbox driver is working properly
  As a developer
  I need to use the step definitions of this context

  Scenario: Viewing content in a region
    Given I am on the homepage
    Then I should see "Case Histories" in the "jumbo_first" region

  Scenario: Find an element with an attribute in a region
    Given I am on the homepage
    Then I should see the "h1" element with the "id" attribute set to "site-name" in the "header" region

  Scenario: Find text in an element with an attribute in a region
    Given I am on the homepage
    Then I should see "Clients" in the "h2" element with the "id" attribute set to "block-views-clients-block" in the "jumbo_third" region
